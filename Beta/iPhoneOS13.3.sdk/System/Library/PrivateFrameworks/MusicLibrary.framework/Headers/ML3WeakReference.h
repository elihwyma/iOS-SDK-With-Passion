/*
 Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <Foundation/NSObject.h>

@interface ML3WeakReference : NSObject

{
    id _object;
    unsigned long long _objectAddress;
}

+ (id)weakReferenceWithObject:(id)arg1;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)object;
- (id)initWithObject:(id)arg1;

@end
