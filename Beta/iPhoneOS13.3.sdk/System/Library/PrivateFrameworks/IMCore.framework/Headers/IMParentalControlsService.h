/*
 Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

#import <Foundation/NSObject.h>

@class NSSet, NSString;

@interface IMParentalControlsService : NSObject

{
    _Bool _disableService;
    _Bool _forceWhiteList;
    NSSet *_whitelist;
    NSString *_name;
}

@property _Bool disableService;
@property _Bool forceWhiteList;
@property (retain) NSSet *whitelist;
@property (retain) NSString *name;

- (void)dealloc;

@end
