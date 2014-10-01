//
//  DetailViewController.h
//  test
//
//  Created by jaches on 14-10-1.
//  Copyright (c) 2014年 jaches. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

