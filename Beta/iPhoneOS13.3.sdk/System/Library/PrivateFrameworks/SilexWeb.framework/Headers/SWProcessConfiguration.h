/*
 Image: /System/Library/PrivateFrameworks/SilexWeb.framework/SilexWeb
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface SWProcessConfiguration : NSObject

{
    _Bool _shouldRunAtBackgroundPriority;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) _Bool shouldRunAtBackgroundPriority;

- (id)initWithBackgroundPriority:(_Bool)arg1;

@end
