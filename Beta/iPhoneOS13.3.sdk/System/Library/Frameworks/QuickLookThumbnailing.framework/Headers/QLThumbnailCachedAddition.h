/*
 Image: /System/Library/Frameworks/QuickLookThumbnailing.framework/QuickLookThumbnailing
 */

#import <Foundation/NSObject.h>

@class GSAddition;

__attribute__((visibility("hidden")))
@interface QLThumbnailCachedAddition : NSObject

{
    GSAddition *_addition;
    unsigned long long _fileID;
}

@property (retain) GSAddition *addition;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithAddition:(id)arg1;
- (_Bool)isStillValid;

@end
