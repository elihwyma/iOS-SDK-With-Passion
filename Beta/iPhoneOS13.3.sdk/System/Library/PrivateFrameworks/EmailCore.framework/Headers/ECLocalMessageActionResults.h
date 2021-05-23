/*
 Image: /System/Library/PrivateFrameworks/EmailCore.framework/EmailCore
 */

#import <Foundation/NSObject.h>

@class NSError;

@interface ECLocalMessageActionResults : NSObject

{
    NSError *_error;
}

@property (retain, nonatomic) NSError *error;

- (id)initWithError:(id)arg1;

@end
