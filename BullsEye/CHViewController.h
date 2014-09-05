//
//  CHViewController.h
//  BullsEye
//
//  Created by Cyrus on 14-9-3.
//  Copyright (c) 2014 Cyrus Huang. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CHViewController : UIViewController

@property (nonatomic, weak) IBOutlet UISlider *slider;
@property (nonatomic, weak) IBOutlet UILabel *targetLabel;
@property (nonatomic, weak) IBOutlet UILabel *scoreLabel;
@property (nonatomic, weak) IBOutlet UILabel *roundLabel;

- (IBAction)showAlert;
- (IBAction)sliderMoved:(UISlider *)slider;
- (IBAction)startOver;

@end
