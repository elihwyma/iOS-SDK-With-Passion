/*
 Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

#import <UIFoundation/NSGlyphInfo.h>

@interface NSCTGlyphInfo : NSGlyphInfo

+ (_Bool)supportsSecureCoding;

- (unsigned long long)retainCount;
- (_Bool)isEqual:(id)arg1;
- (id)retain;
- (oneway void)release;
- (unsigned long long)hash;
- (_Bool)retainWeakReference;
- (_Bool)allowsWeakReference;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)_cfTypeID;
- (id)_baseString;
- (unsigned long long)characterIdentifier;
- (unsigned long long)characterCollection;
- (id)glyphName;
- (unsigned int)_glyphForFont:(id)arg1 baseString:(id)arg2;

@end
