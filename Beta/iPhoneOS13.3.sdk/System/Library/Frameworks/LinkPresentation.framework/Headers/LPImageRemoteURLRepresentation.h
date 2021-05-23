/*
 Image: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
 */

#import <Foundation/NSObject.h>

@class NSURL;

__attribute__((visibility("hidden")))
@interface LPImageRemoteURLRepresentation : NSObject

{
    unsigned long long _scale;
    NSURL *_URL;
}

@property (nonatomic, readonly) unsigned long long scale;
@property (retain, nonatomic, readonly) NSURL *URL;

- (id)initWithScale:(unsigned long long)arg1 URL:(id)arg2;

@end
