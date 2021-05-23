/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <Foundation/NSObject.h>

#import <VideosUI/Swift-Protocol.h>

@protocol VUIMediaEntityIdentifier;

__attribute__((visibility("hidden")))
@interface VUILibrarySeasonViewModel : NSObject <Swift>

{
    NSObject<VUIMediaEntityIdentifier> *_seasonIdentifier;
    unsigned long long _type;
}

@property (nonatomic, readonly) NSObject<VUIMediaEntityIdentifier> *seasonIdentifier;
@property (nonatomic, readonly) unsigned long long type;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSeasonIdentifier:(id)arg1 type:(unsigned long long)arg2;

@end
