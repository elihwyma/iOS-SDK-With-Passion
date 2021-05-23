/*
 Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

#import <Foundation/NSObject.h>

@class NSArray;

@interface NEIKEv2ChildSAConfiguration : NSObject

{
    NSArray *_proposals;
    _Bool _sequencePerTrafficClass;
    unsigned int _replayWindowSize;
    unsigned long long _mode;
    NSArray *_localTrafficSelectors;
    NSArray *_remoteTrafficSelectors;
}

@property unsigned long long mode;
@property unsigned int replayWindowSize;
@property _Bool sequencePerTrafficClass;
@property (retain, nonatomic) NSArray *proposals;
@property (retain) NSArray *localTrafficSelectors;
@property (retain) NSArray *remoteTrafficSelectors;

- (id)init;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;

@end
