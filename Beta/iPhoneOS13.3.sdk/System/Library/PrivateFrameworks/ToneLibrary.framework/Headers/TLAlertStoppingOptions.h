/*
 Image: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
 */

#import <Foundation/NSObject.h>

@interface TLAlertStoppingOptions : NSObject

{
    _Bool _shouldWaitUntilEndOfCurrentRepetition;
    double _fadeOutDuration;
}

@property (nonatomic) double fadeOutDuration;
@property (nonatomic) _Bool shouldWaitUntilEndOfCurrentRepetition;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
