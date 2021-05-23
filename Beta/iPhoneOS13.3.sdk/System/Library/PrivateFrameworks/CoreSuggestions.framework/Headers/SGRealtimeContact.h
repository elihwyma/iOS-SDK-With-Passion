/*
 Image: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
 */

#import <Foundation/NSObject.h>

@class NSString, SGContact, SGExtractionInfo;

@interface SGRealtimeContact : NSObject

{
    _Bool _isHarvested;
    int _state;
    int _updatedFields;
    SGContact *_contact;
    NSString *_cnContactIdentifier;
    SGExtractionInfo *_extractionInfo;
}

@property (nonatomic, readonly) int state;
@property (nonatomic, readonly) int updatedFields;
@property (nonatomic, readonly) SGContact *contact;
@property (nonatomic, readonly) NSString *cnContactIdentifier;
@property (nonatomic, readonly) SGExtractionInfo *extractionInfo;
@property (nonatomic, readonly) _Bool isHarvested;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;
+ (id)realtimeContactForNewContact:(id)arg1;
+ (id)realtimeContactForFields:(id)arg1 updatedFields:(int)arg2 addedToCuratedContact:(id)arg3;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithState:(int)arg1 updatedFields:(int)arg2 contact:(id)arg3 identifier:(id)arg4;
- (id)markedAsHarvested;
- (_Bool)isEqualToRealtimeContact:(id)arg1;
- (void)setExtractionInfo;
- (void)setCnContactIdentifier:(id)arg1;

@end
