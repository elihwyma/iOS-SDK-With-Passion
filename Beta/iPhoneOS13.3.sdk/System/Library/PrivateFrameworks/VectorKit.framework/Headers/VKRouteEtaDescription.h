/*
 Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface VKRouteEtaDescription : NSObject

{
    NSString *_etaText;
    unsigned char _glyphType;
    unsigned char _tollCurrencyType;
}

@property (nonatomic, readonly) NSString *etaText;
@property (nonatomic, readonly) unsigned char glyphType;
@property (nonatomic, readonly) unsigned char tollCurrencyType;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithEtaText:(id)arg1 glyphType:(unsigned char)arg2 tollCurrencyType:(unsigned char)arg3;
- (id)initWithEtaText:(id)arg1;

@end
