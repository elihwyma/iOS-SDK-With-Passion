/*
 Image: /System/Library/PrivateFrameworks/vCard.framework/vCard
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString;

@interface CNVCardParsedDictionaryResultBuilder : NSObject

{
    NSMutableDictionary *_dictionaryRep;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)factory;

- (id)init;
- (id)build;
- (id)valueForProperty:(id)arg1;
- (_Bool)setValue:(id)arg1 forProperty:(id)arg2;
- (_Bool)setImageData:(id)arg1;
- (_Bool)canSetValueForProperty:(id)arg1;
- (_Bool)setValues:(id)arg1 labels:(id)arg2 isPrimaries:(id)arg3 forProperty:(id)arg4;
- (_Bool)setImageData:(id)arg1 forReference:(id)arg2 clipRects:(id)arg3;
- (void)setUnknownProperties:(id)arg1;
- (id)validCountryCodes;

@end
