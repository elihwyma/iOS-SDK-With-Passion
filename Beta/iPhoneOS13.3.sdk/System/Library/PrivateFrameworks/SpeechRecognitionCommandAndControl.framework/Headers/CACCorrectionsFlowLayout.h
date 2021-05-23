/*
 Image: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
 */

#import <UIKit/UICollectionViewFlowLayout.h>

@interface CACCorrectionsFlowLayout : UICollectionViewFlowLayout

+ (Class)layoutAttributesClass;

- (void)prepareLayout;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (double)_availableWidth;

@end
