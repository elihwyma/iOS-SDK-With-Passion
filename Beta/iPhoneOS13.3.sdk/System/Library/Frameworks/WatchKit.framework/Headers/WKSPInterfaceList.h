/*
 Image: /System/Library/Frameworks/WatchKit.framework/WatchKit
 */

#import <WatchKit/WKSPInterfaceObject.h>

@class NSArray, NSDictionary, WKInterfaceController;

@interface WKSPInterfaceList : WKSPInterfaceObject

{
    NSArray *_rowControllers;
    NSDictionary *_rowDescriptions;
    WKInterfaceController *_controller;
    NSArray *_rowControllerProperties;
}

@property (copy, nonatomic) NSArray *rowControllers;
@property (copy, nonatomic) NSDictionary *rowDescriptions;
@property (weak, nonatomic) WKInterfaceController *controller;
@property (retain, nonatomic) NSArray *rowControllerProperties;
@property (nonatomic, readonly) long long numberOfRows;

- (void)_setupWithDescription:(id)arg1 forController:(id)arg2;
- (id)rowControllerAtIndex:(long long)arg1;
- (void)setRowTypes:(id)arg1;
- (void)setNumberOfRows:(long long)arg1 withRowType:(id)arg2;

@end
