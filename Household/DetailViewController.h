//
//  DetailViewController.h
//  Household
//
//  Created by Alan Westbrook on 11/11/14.
//  Copyright (c) 2014 Rockwood. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

