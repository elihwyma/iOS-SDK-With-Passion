/*
 Image: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
 */

#import <NSObject.h>

@class NSString, WFDatabase, WFDatabaseObjectDescriptor, WFRecord;

@interface VCDatabaseChange : NSObject

{
    NSString *_objectIdentifier;
    long long _changeType;
    WFRecord *_record;
    WFDatabase *_database;
}

@property (copy, nonatomic) WFRecord *record;
@property (nonatomic, readonly) WFDatabase *database;
@property (copy, nonatomic, readonly) WFDatabaseObjectDescriptor *descriptor;
@property (nonatomic, readonly) unsigned long long estimatedSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *objectIdentifier;
@property (nonatomic, readonly) NSString *sequencer;
@property (nonatomic, readonly) long long changeType;

+ (int)messageType;
+ (Class)recordClass;
+ (id)recordProperties;

- (_Bool)writeTo:(id)arg1 error:(id *)arg2;
- (_Bool)readFrom:(id)arg1 error:(id *)arg2;
- (id)initWithObjectIdentifier:(id)arg1 changeType:(long long)arg2;
- (id)initWithDescriptor:(id)arg1 inDatabase:(id)arg2 changeType:(long long)arg3;
- (id)recordWithError:(id *)arg1;

@end
