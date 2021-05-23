/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, NSString;

@interface AVCCaptionsResult : NSObject

{
    _Bool _utteranceComplete;
    NSMutableArray *_tokens;
    unsigned int _utteranceNumber;
    unsigned int _updateNumber;
}

@property (nonatomic, readonly) _Bool utteranceComplete;
@property (nonatomic, readonly) NSArray *tokens;
@property (nonatomic, readonly) NSString *text;
@property (nonatomic, readonly) unsigned int utteranceNumber;
@property (nonatomic, readonly) unsigned int updateNumber;

- (void)dealloc;
- (id)description;
- (id)initWithCapacity:(long long)arg1 utteranceComplete:(_Bool)arg2 utteranceNumber:(unsigned int)arg3 updateNumber:(unsigned int)arg4;
- (_Bool)addTokenWithString:(id)arg1 confidence:(double)arg2 spaceAfter:(_Bool)arg3;

@end
