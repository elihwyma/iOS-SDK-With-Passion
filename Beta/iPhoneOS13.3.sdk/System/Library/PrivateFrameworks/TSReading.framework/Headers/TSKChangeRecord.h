/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

@interface TSKChangeRecord : NSObject

{
    int mKind;
    id mDetails;
}

@property (nonatomic, readonly) int kind;
@property (nonatomic, readonly) id details;
@property (nonatomic, readonly) _Bool allowedInCommit;

+ (id)changeRecordWithKind:(int)arg1 details:(id)arg2;

- (void)dealloc;
- (id)initWithKind:(int)arg1 details:(id)arg2;

@end
