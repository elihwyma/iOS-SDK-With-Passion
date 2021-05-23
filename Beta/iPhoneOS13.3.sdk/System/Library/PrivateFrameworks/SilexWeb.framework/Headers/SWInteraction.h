/*
 Image: /System/Library/PrivateFrameworks/SilexWeb.framework/SilexWeb
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface SWInteraction : NSObject

{
    unsigned long long _type;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) unsigned long long type;

- (_Bool)isEqual:(id)arg1;
- (id)initWithType:(unsigned long long)arg1;
- (void)perform;

@end
