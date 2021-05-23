/*
 Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

#import <Foundation/NSObject.h>

@class NSArray;

@interface VSValueType : NSObject

{
    Class _implementationClass;
    NSArray *_properties;
}

@property (retain, nonatomic) Class implementationClass;
@property (copy, nonatomic) NSArray *properties;

- (_Bool)isSuperclassAlsoValueType;

@end
