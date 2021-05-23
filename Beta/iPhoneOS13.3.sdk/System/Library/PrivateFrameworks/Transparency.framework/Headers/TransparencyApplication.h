/*
 Image: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface TransparencyApplication : NSObject

{
    NSString *_applicationIdentifier;
}

@property (retain) NSString *applicationIdentifier;

+ (id)applicationValueForIdentifier:(id)arg1;
+ (id)applicationIdentifierForValue:(id)arg1;

- (id)initWithIdentifier:(id)arg1;

@end
