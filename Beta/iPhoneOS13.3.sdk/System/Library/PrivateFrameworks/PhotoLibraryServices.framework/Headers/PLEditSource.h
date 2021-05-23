/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class NUResolvedSource, NUSource;

@interface PLEditSource : NSObject

{
    NUResolvedSource *_resolvedSource;
    long long _mediaType;
}

@property (nonatomic, readonly) NUResolvedSource *resolvedSource;
@property (retain, nonatomic, readonly) NUSource *source;
@property (nonatomic, readonly) long long mediaType;
@property (nonatomic, readonly) _Bool isRAWSource;

- (id)description;
- (void)setIdentifier:(id)arg1;
- (id)initWithResolvedSource:(id)arg1 mediaType:(long long)arg2;

@end
