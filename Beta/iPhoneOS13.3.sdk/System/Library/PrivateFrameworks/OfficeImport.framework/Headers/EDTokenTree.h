/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface EDTokenTree : NSObject

+ (id)buildSubtree:(unsigned int)arg1 formula:(id)arg2;
+ (id)buildSubtreeAtIndex:(unsigned int *)arg1 formula:(id)arg2;
+ (unsigned int)childCountForToken:(unsigned int)arg1 formula:(id)arg2;
+ (_Bool)isTokenNoOp:(unsigned int)arg1 formula:(id)arg2;
+ (_Bool)isTokenAttrASum:(unsigned short)arg1;

@end
