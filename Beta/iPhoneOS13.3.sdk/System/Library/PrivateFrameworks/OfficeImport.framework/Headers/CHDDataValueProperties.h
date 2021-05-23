/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class CHDDataLabel, CHDMarker, NSString, OADGraphicProperties;

__attribute__((visibility("hidden")))
@interface CHDDataValueProperties : NSObject

{
    CHDDataLabel *mDataLabel;
    CHDMarker *mMarker;
    unsigned long long mDataValueIndex;
    OADGraphicProperties *mGraphicProperties;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)dataValueProperties;

- (id)init;
- (long long)key;
- (id)marker;
- (id)graphicProperties;
- (void)setDataValueIndex:(unsigned long long)arg1;
- (void)setGraphicProperties:(id)arg1;
- (void)setMarker:(id)arg1;
- (void)setDataLabel:(id)arg1;
- (id)shallowCopyWithIndex:(unsigned long long)arg1;
- (id)dataLabel;
- (unsigned long long)dataValueIndex;

@end
