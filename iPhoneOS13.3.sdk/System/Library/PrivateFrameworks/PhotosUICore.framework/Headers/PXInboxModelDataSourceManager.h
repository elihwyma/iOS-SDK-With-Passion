//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXSectionedDataSourceManager.h>

#import <PhotosUICore/PXInboxModelDataSourceManagerBase-Protocol.h>

@protocol PXInboxProviderSource;

@interface PXInboxModelDataSourceManager : PXSectionedDataSourceManager <PXInboxModelDataSourceManagerBase>
{
}

@property(readonly, nonatomic) id <PXInboxProviderSource> providerSource;

@end

