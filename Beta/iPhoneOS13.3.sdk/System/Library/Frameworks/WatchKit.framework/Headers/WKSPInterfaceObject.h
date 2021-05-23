/*
 Image: /System/Library/Frameworks/WatchKit.framework/WatchKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface WKSPInterfaceObject : NSObject

{
    NSString *_interfaceProperty;
    NSString *_viewControllerID;
    NSString *_propertyIndex;
    long long _tableIndex;
    long long _rowIndex;
}

@property (copy, nonatomic) NSString *interfaceProperty;
@property (copy, nonatomic) NSString *viewControllerID;
@property (copy, nonatomic) NSString *propertyIndex;
@property (nonatomic) long long tableIndex;
@property (nonatomic) long long rowIndex;

- (id)init;
- (void)_sendValueChanged:(id)arg1 forProperty:(id)arg2;
- (id)_initWithInterfaceProperty:(id)arg1 viewControllerID:(id)arg2 propertyIndex:(long long)arg3 tableIndex:(long long)arg4 rowIndex:(long long)arg5;
- (void)_setupWithDescription:(id)arg1 forController:(id)arg2;
- (void)_sendValueChanged:(id)arg1;

@end
