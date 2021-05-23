/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface TCDumpBinaryToXmlState : NSObject

{
    NSString *mCurrentFieldName;
    NSMutableDictionary *mFieldNameToValueMap;
}

- (id)init;
- (void)setCurrentField:(id)arg1;
- (void)cacheValueforCurrentField:(id)arg1;
- (id)valueForCurrentField;
- (id)valueForField:(id)arg1;

@end
