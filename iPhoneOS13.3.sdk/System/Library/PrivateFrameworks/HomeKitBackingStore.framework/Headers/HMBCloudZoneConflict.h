//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class CKRecord;

@interface HMBCloudZoneConflict : HMFObject
{
    CKRecord *_client;
    CKRecord *_server;
    CKRecord *_ancestor;
}

@property(readonly, nonatomic) CKRecord *ancestor; // @synthesize ancestor=_ancestor;
@property(readonly, nonatomic) CKRecord *server; // @synthesize server=_server;
@property(readonly, nonatomic) CKRecord *client; // @synthesize client=_client;
// - (void).cxx_destruct;
- (id)initWithClientRecord:(id)arg1 serverRecord:(id)arg2 ancestorRecord:(id)arg3;
- (id)initWithError:(id)arg1;

@end

