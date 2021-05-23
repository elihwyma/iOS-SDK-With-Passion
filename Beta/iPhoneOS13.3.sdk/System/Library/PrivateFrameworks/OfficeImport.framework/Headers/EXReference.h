/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface EXReference : NSObject

+ (_Bool)edAreaReferenceFromXmlReference:(id)arg1 areaReference:(struct EDAreaReference *)arg2;
+ (id)edDiscontinousReferencesFromXmlRanges:(id)arg1;
+ (id)edReferenceFromXmlReference:(id)arg1;
+ (id)numberToStringBase26:(int)arg1;
+ (id)xmlReferenceFromAreaReference:(struct EDAreaReference *)arg1;
+ (id)xmlReferenceFromEDReference:(id)arg1;
+ (id)xmlRangesFromDiscontinuousReferences:(id)arg1;

@end
