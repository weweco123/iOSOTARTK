//
//  ViewController.m
//  iOSOTARTK
//
//  Created by V V on 2020/10/20.
//

#import "ViewController.h"
#import <UTERTKLib/UTEOTALib.h>

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    self.view.backgroundColor = [UIColor whiteColor];
    
    UILabel *label = [[UILabel alloc] initWithFrame:CGRectMake(0, 0, self.view.frame.size.width, 150)];
    label.textColor = [UIColor blackColor];
    label.center = CGPointMake(self.view.frame.size.width*0.5, self.view.frame.size.height*0.5);
    label.text = @"Nice";
    label.textAlignment = NSTextAlignmentCenter;
    label.font = [UIFont boldSystemFontOfSize:150];
    [self.view addSubview:label];
}


@end
