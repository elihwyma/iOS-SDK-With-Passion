/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class OADDrawable;

__attribute__((visibility("hidden")))
@interface WDStory : NSObject

{
    OADDrawable *mHead;
    _Bool mOle;
}

- (id)head;
- (id)text;
- (void)setOle:(_Bool)arg1;
- (id)initWithHead:(id)arg1;
- (_Bool)isOle;

@end
