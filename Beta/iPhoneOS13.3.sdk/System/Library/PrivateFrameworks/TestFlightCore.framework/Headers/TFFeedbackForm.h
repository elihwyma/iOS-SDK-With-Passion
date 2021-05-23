/*
 Image: /System/Library/PrivateFrameworks/TestFlightCore.framework/TestFlightCore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface TFFeedbackForm : NSObject

{
    NSString *_title;
    NSArray *_entryGroups;
}

@property (copy, nonatomic, readonly) NSString *title;
@property (copy, nonatomic, readonly) NSArray *entryGroups;

- (id)initWithTitle:(id)arg1 entryGroups:(id)arg2;

@end
