/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <Foundation/NSObject.h>

@class NSString, VUIMediaEntityType;

__attribute__((visibility("hidden")))
@interface VUIPlistMediaEntityIdentifier : NSObject

{
    NSString *_identifier;
    VUIMediaEntityType *_mediaEntityType;
}

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) VUIMediaEntityType *mediaEntityType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithIdentifier:(id)arg1 type:(unsigned long long)arg2;

@end
