/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <Foundation/NSObject.h>

@class NSError;

@interface NUResponse : NSObject

{
    id _result;
    NSError *_error;
}

@property (retain) id result;
@property (retain) NSError *error;

- (id)init;
- (id)description;
- (id)initWithError:(id)arg1;
- (id)initWithResult:(id)arg1;
- (id)result:(id *)arg1;

@end
