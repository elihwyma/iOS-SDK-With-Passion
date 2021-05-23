/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface TSWPStorageStyleProvider : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) _Bool supportsBoldItalicUnderlineShortcuts;

+ (id)styleProviderForStorage:(id)arg1;

- (id)paragraphStyleAtParIndex:(unsigned long long)arg1 effectiveRange:(struct _NSRange *)arg2;

@end
