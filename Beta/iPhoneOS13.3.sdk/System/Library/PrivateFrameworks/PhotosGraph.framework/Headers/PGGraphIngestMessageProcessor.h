/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSSet, NSString, PGMessageProfile;

@interface PGGraphIngestMessageProcessor : NSObject

{
    NSSet *_personNodes;
    NSSet *_contactIdentifiers;
    NSDictionary *_personLocalIdentifierByCNIdentifier;
    PGMessageProfile *_messageProfile;
    NSSet *_loveEmojis;
}

@property (nonatomic, readonly) NSSet *personNodes;
@property (nonatomic, readonly) NSSet *contactIdentifiers;
@property (retain, nonatomic) PGMessageProfile *messageProfile;
@property (retain, nonatomic) NSDictionary *personLocalIdentifierByCNIdentifier;
@property (nonatomic, readonly) NSSet *loveEmojis;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)shouldRunWithGraphUpdate:(id)arg1;
- (void)runWithGraphUpdate:(id)arg1 progressBlock:(CDUnknownBlockType)arg2;
- (_Bool)_isInterestingGroupChatWithPersons:(id)arg1;
- (id)addressComponentFromText:(id)arg1 usingDataDetector:(id)arg2;
- (id)locationFromAddressComponents:(id)arg1;
- (id)_cnPostalAddressFromAddressComponents:(id)arg1;
- (unsigned long long)numberOfEmojis:(id)arg1 inText:(id)arg2;

@end
