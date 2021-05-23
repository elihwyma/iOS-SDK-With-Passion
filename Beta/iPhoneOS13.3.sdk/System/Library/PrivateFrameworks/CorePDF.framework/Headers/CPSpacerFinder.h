/*
 Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import <Foundation/NSObject.h>

@class CPZone, NSMutableArray;

__attribute__((visibility("hidden")))
@interface CPSpacerFinder : NSObject

{
    CPZone *contentZone;
    struct CGRect zoneBounds;
    struct CGRect textBounds;
    struct {
        unsigned int allocatedSize;
        unsigned int size;
        unsigned int count;
        CDStruct_183601bc *stats;
        CDStruct_183601bc **ordered;
    } spacerSequence;
    NSMutableArray *spacers;
    unsigned int segmentationCount;
    struct {
        id _field1;
        unsigned int _field2;
        CDStruct_183601bc *_field3;
    } *segmentations;
    struct {
        struct CGRect _field1;
        unsigned int _field2;
        unsigned int _field3;
        unsigned int _field4;
        unsigned int _field5;
        unsigned int _field6;
        unsigned int _field7;
        unsigned int _field8;
        unsigned int _field9;
        unsigned int _field10;
        unsigned int _field11;
        unsigned int _field12;
        unsigned int _field13;
        unsigned int _field14;
        CDStruct_c3b9c2ee _field15;
        CDStruct_c3b9c2ee _field16;
        CDStruct_c3b9c2ee _field17;
        CDStruct_c3b9c2ee _field18;
        double _field19;
        double _field20;
        _Bool _field21;
        _Bool _field22;
        _Bool _field23;
    } *qualityEntries;
}

- (void)dealloc;
- (void)finalize;
- (void)dispose;
- (id)spacers;
- (id)initWithContentZone:(id)arg1;
- (void)findSpacers;
- (void)splitTextLines;
- (void)initializeSegmentations;
- (void)initializeJunctions;
- (void)assessQuality;
- (void)determineValidity;

@end
