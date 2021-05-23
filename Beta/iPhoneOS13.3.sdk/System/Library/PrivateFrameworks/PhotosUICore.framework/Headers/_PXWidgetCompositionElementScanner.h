/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSArray;

@interface _PXWidgetCompositionElementScanner : NSObject

{
    long long _scanLocation;
    struct _NSRange _scannedRowRange;
    NSArray *_elements;
    CDUnknownBlockType _wantsEdgeToEdgeLayoutBlock;
    double _referenceWidth;
    double _interColumnSpacing;
    long long _maximumNumberOfColumns;
}

@property (copy, nonatomic) NSArray *elements;
@property (copy, nonatomic) CDUnknownBlockType wantsEdgeToEdgeLayoutBlock;
@property (nonatomic) double referenceWidth;
@property (nonatomic) double interColumnSpacing;
@property (nonatomic) long long maximumNumberOfColumns;
@property (nonatomic, readonly, getter=isAtEnd) _Bool atEnd;
@property (nonatomic, readonly) long long numberOfColumns;

- (void)enumerateElementsUsingBlock:(CDUnknownBlockType)arg1;
- (_Bool)scanRow:(out id *)arg1;
- (_Bool)_wantsEdgeToEdgeLayoutForElement:(id)arg1;

@end
