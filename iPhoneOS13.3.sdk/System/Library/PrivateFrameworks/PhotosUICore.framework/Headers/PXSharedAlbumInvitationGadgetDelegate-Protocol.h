//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXGadgetDelegate-Protocol.h>

@protocol PXGadget;

@protocol PXSharedAlbumInvitationGadgetDelegate <PXGadgetDelegate>

@optional
- (void)gadgetDidReportJunk:(id <PXGadget>)arg1;
- (void)gadget:(id <PXGadget>)arg1 didAccept:(BOOL)arg2;
@end

