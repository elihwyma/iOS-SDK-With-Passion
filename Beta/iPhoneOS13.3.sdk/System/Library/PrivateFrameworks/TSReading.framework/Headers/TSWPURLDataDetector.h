/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface TSWPURLDataDetector : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)initURLCharacterSets;
+ (struct _NSRange)expandValidRange:(struct _NSRange)arg1 inString:(id)arg2;
+ (id)newArrayByScanningString:(id)arg1 scanRange:(struct _NSRange)arg2;
+ (id)newURLFromString:(id)arg1;
+ (id)detectorIdentifier;
+ (void)setInvalidURLSchemes:(id)arg1;
+ (struct _NSRange)calculateScanRangeForString:(id)arg1 changedRange:(struct _NSRange)arg2;
+ (id)scanString:(id)arg1 scanRange:(struct _NSRange)arg2;

@end
