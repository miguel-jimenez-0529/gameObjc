//
//  ViewController.h
//  App ObjC
//
//  Created by Miguel Jimenez on 12/17/17.
//  Copyright © 2017 Miguel Jimenez. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController<UIAlertViewDelegate> {
    IBOutlet UILabel *scoreLabel;
    IBOutlet UILabel *timerLabel;
    
    NSInteger count;
    NSInteger seconds;
    NSTimer *timer;
}

-(IBAction)buttonPressed;


@end

