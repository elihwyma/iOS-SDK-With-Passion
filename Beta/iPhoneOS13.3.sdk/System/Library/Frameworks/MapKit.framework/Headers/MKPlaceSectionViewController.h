/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <UIKit/UIViewController.h>

@class MKPlaceSectionView, NSString;

@interface MKPlaceSectionViewController : UIViewController

{
    MKPlaceSectionView *_sectionView;
}

@property (nonatomic, readonly) MKPlaceSectionView *sectionView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)loadView;
- (void)traitCollectionDidChange:(id)arg1;
- (_Bool)_viewHostsLayoutEngineAllowsTAMIC_NO;
- (void)stackViewNeedsLayout:(id)arg1;
- (void)sectionView:(id)arg1 didSelectHeader:(id)arg2;
- (void)sectionView:(id)arg1 didSelectRow:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)sectionView:(id)arg1 didDeselectRow:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)sectionView:(id)arg1 didSelectFooter:(id)arg2;

@end
