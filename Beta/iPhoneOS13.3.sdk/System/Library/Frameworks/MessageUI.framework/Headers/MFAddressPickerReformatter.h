/*
 Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

#import <Foundation/NSObject.h>

@class NSArray;

@interface MFAddressPickerReformatter : NSObject

{
    NSArray *_addresses;
    NSArray *_reformattedAddresses;
    double _maximumWidth;
    double _minimumFontSize;
    double _maximumFontSize;
    double _fontSize;
    _Bool _attributesDisabled;
}

- (void)setFontSize:(double)arg1;
- (void)setMaximumWidth:(double)arg1;
- (void)setAddresses:(id)arg1;
- (void)_invalidateReformattedAddresses;
- (void)setMinimumFontSize:(double)arg1 maximumFontSize:(double)arg2;
- (void)_updateReformattedAddressesIfNecessary;
- (unsigned long long)_defaultOptions;
- (id)reformattedAddressAtIndex:(unsigned long long)arg1;
- (void)_determineFontSize:(_Bool *)arg1;
- (void)_truncateIdenticalLocalPartsWithDifferentDomainParts;
- (void)_attemptUniquingDisplayedStrings;
- (void)_truncateIdenticalLocalPartsWithDifferentDomainPartsWithTailLength:(unsigned long long)arg1 options:(unsigned long long)arg2;
- (_Bool)_attemptUniquingDisplayedStringsUsingBlock:(CDUnknownBlockType)arg1;
- (void)_expandAllLocalParts;
- (id)_reformattedAddressesByDisplayedStrings;
- (_Bool)_reformattedAddressesByDisplayedStringsAreUnique:(id)arg1;
- (id)_saveMiddleTruncationRanges;
- (void)_restoreMiddleTruncationRanges:(id)arg1;
- (void)setAttributesDisabled:(_Bool)arg1;
- (unsigned long long)numberOfReformattedAddresses;
- (id)reformattedAddressStringAtIndex:(unsigned long long)arg1;

@end
