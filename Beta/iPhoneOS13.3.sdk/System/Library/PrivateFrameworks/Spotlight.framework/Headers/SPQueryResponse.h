/*
 Image: /System/Library/PrivateFrameworks/Spotlight.framework/Spotlight
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString, SPQueryTask;

@interface SPQueryResponse : NSObject

{
    int _kind;
    int _state;
    SPQueryTask *_task;
    NSArray *_resultSections;
    NSString *_rankingDebugLog;
    NSString *_sessionEntityString;
}

@property (nonatomic) int kind;
@property (nonatomic) int state;
@property (retain, nonatomic) SPQueryTask *task;
@property (retain, nonatomic) NSArray *resultSections;
@property (retain, nonatomic) NSString *sessionEntityString;
@property (retain, nonatomic) NSString *rankingDebugLog;

- (id)init;
- (id)description;
- (id)copy;
- (id)initWithTask:(id)arg1;

@end
