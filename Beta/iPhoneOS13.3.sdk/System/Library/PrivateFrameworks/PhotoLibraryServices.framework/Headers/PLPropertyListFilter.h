/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@interface PLPropertyListFilter : NSObject

+ (id)_filterDictionary:(id)arg1 block:(CDUnknownBlockType)arg2;
+ (id)_filterArray:(id)arg1 block:(CDUnknownBlockType)arg2;
+ (id)filterPropertyList:(id)arg1 block:(CDUnknownBlockType)arg2;
+ (id)filterPropertyList:(id)arg1;
+ (id)filterPropertyListNoData:(id)arg1;
+ (_Bool)canEncodeInPropertyList:(id)arg1;

@end
