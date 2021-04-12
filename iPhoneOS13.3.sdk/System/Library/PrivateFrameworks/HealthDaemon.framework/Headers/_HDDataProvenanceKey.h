//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class HDDataOriginProvenance, NSString;

@interface _HDDataProvenanceKey : NSObject <NSCopying>
{
    NSUInteger _hash;
    HDDataOriginProvenance *_dataProvenance;
    NSString *_localProductType;
    NSString *_localSystemBuild;
}

+ (id)provenanceKeyForProvenance:(id)arg1 localProductType:(id)arg2 localSystemBuild:(id)arg3;
@property(readonly, copy, nonatomic) NSString *localSystemBuild; // @synthesize localSystemBuild=_localSystemBuild;
@property(readonly, copy, nonatomic) NSString *localProductType; // @synthesize localProductType=_localProductType;
@property(readonly, copy, nonatomic) HDDataOriginProvenance *dataProvenance; // @synthesize dataProvenance=_dataProvenance;
// - (void).cxx_destruct;
- (id)description;
// - (id)copyWithZone:(_NSZone )arg1;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;

@end

