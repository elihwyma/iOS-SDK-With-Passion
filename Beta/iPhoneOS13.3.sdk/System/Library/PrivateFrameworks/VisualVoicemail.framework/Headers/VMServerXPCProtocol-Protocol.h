/*
 Image: /System/Library/PrivateFrameworks/VisualVoicemail.framework/VisualVoicemail
 */

#import <VisualVoicemail/Swift-Protocol.h>

@protocol VMServerXPCProtocol <Swift>

- (unsigned short)synchronize;
- (unsigned short)requestInitialState: /* Error: Ran out of types for this method. */;
- (unsigned short)obliterate;
- (unsigned short)retrieveDataForIdentifier: /* Error: Ran out of types for this method. */;
- (unsigned short)setDeletedForIdentifiers: /* Error: Ran out of types for this method. */;
- (unsigned short)setReadForIdentifiers: /* Error: Ran out of types for this method. */;
- (unsigned short)setTrashedForIdentifiers: /* Error: Ran out of types for this method. */;
- (unsigned short)removeVoicemailFromTrashWithIdentifier: /* Error: Ran out of types for this method. */;
- (unsigned short)requestTranscriptionProgress: /* Error: Ran out of types for this method. */;
- (unsigned short)reportTranscriptionProblemForIdentifier: /* Error: Ran out of types for this method. */;
- (unsigned short)reportTranscriptionRatedAccurate:forIdentifier: /* Error: Ran out of types for this method. */;
- (unsigned short)allVoicemails: /* Error: Ran out of types for this method. */;
- (unsigned short)setDeletedForIdentifier: /* Error: Ran out of types for this method. */;
- (unsigned short)setReadForIdentifier: /* Error: Ran out of types for this method. */;
- (unsigned short)removeAllVoicemails;

@end
