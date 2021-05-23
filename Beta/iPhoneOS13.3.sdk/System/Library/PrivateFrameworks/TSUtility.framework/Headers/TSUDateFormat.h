/*
 Image: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
 */

#import <Foundation/NSObject.h>

#import <TSUtility/Swift-Protocol.h>

@class NSString;

@interface TSUDateFormat : NSObject <Swift>

{
    NSString *mFormat;
    NSString *mName;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)formatWithFormat:(id)arg1 name:(id)arg2;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)format;
- (id)initWithFormat:(id)arg1 name:(id)arg2;
- (id)formatName;
- (void)setFormatName:(id)arg1;

@end
