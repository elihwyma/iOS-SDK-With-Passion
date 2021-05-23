/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <Foundation/NSObject.h>

@class NSDictionary;

@interface CRKCloudRemoteDelta : NSObject

{
    NSDictionary *_changeRecordsByRecordType;
    NSDictionary *_deleteIdsByRecordType;
}

@property (retain, nonatomic) NSDictionary *changeRecordsByRecordType;
@property (retain, nonatomic) NSDictionary *deleteIdsByRecordType;
@property (nonatomic, readonly) NSDictionary *changeRecordIdsByRecordType;

+ (id)new;

- (id)init;
- (_Bool)isEmpty;
- (id)initWithChangedRecordsByRecordType:(id)arg1 deleteIdsByRecordType:(id)arg2;

@end
