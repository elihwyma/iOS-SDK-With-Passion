/*
 Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

#import <Foundation/NSObject.h>

@interface CRVectorTimestampElement : NSObject

{
    unsigned long long _clock;
    unsigned long long _subclock;
}

@property (nonatomic) unsigned long long clock;
@property (nonatomic) unsigned long long subclock;

@end
