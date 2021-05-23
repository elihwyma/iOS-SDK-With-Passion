/*
 Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

@protocol PLPhotoAnalysisVisionServiceFaceProcessingProtocol

- (unsigned short)performFaceProcessingOnAssetWithLocalIdentifier:context:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)suggestPersonsForPersonWithLocalIdentifier:toBeConfirmedPersonSuggestions:toBeRejectedPersonSuggestions:context:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)suggestVerifiedPersonLocalIdentifierForFaceWithLocalIdentifier:context:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)suggestVerifiedPersonLocalIdentifierForPersonWithLocalIdentifier:context:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)renderFaceTilesForFaceLocalIdentifiers:inAssetWithLocalIdentifier:context:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)updateKeyFacesOfPersonsWithLocalIdentifiers:forceUpdate:context:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)resetFaceClusteringStateWithContext:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)resetPeopleWithContext:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)resetFaceClassificationModelWithContext:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)reclusterFacesWithContext:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)processPersonsWithContext:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)faceClusteringInformation:withContext:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)validateClusterCacheWithContext:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)requestSuggestedMePersonIdentifierWithContext:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)faceProcessingStatusForUserInterfaceWithContext:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)personPromoterStatusWithContext:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)faceCandidatesforKeyFaceForPersonsWithLocalIdentifiers:context:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)rebuildPersonsWithContext:reply: /* Error: Ran out of types for this method. */;

@end
