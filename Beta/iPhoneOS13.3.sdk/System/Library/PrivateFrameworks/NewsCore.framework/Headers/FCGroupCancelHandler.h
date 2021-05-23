/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface FCGroupCancelHandler : NSObject

{
    NSArray *_cancelHandlers;
}

@property (copy, nonatomic) NSArray *cancelHandlers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)groupCancelHandlerWithCancelHandlers:(id)arg1;

- (void)cancel;
- (id)initWithCancelHandlers:(id)arg1;

@end
