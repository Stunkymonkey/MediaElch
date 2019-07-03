#pragma once

#include <QDomElement>
#include <QString>

class TvShowEpisode;

namespace mediaelch {
namespace kodi {

class EpisodeXmlReader
{
public:
    EpisodeXmlReader(TvShowEpisode& episode);
    void parseNfoDom(QDomDocument domDoc, QDomElement episodeDetails);

private:
    TvShowEpisode& m_episode;
};

} // namespace kodi
} // namespace mediaelch