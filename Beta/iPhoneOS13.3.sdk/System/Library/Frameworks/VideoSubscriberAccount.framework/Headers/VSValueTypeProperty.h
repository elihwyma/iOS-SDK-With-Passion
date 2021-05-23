/*
 Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

#import <Foundation/NSObject.h>

@class NSSet, NSString;

@interface VSValueTypeProperty : NSObject

{
    NSString *_name;
    unsigned long long _kind;
    NSSet *_allowedClasses;
    id _initialValue;
}

@property (copy, nonatomic) NSString *name;
@property (nonatomic) unsigned long long kind;
@property (copy, nonatomic) NSSet *allowedClasses;
@property (retain, nonatomic) id initialValue;

+ (id)valueTypePropertyWithName:(id)arg1 kind:(unsigned long long)arg2 allowedClasses:(id)arg3 initialValue:(id)arg4;

@end
