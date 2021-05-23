/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface PBOutlineBulletDictionary : NSObject

{
    NSMutableDictionary *mDictionary;
}

- (id)initFromContainer:(id)arg1 objectType:(unsigned int)arg2;
- (id)objectForSlideId:(unsigned int)arg1 textType:(int)arg2 placeholderIndex:(unsigned int)arg3;

@end
